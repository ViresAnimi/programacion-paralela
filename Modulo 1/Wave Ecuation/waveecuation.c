#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// gcc waveecuation.c -o out.x -lm -O3
// time ./out.x > outout.txt

#define N 1000         // Number of spatial grid points
#define STEPS 2000     // Number of time steps
#define L 1.0          // Length of the domain
#define C 1.0          // Wave speed
#define CFL 0.9        // CFL number (must be <= 1 for stability)

int main() {
    double dx = L / (N - 1);
    double dt = CFL * dx / C; // Time step from CFL condition
    double cfl2 = (C * dt / dx) * (C * dt / dx);

    // Allocate arrays
    double *u_prev = (double*)calloc(N, sizeof(double));
    double *u = (double*)calloc(N, sizeof(double));
    double *u_next = (double*)calloc(N, sizeof(double));

    // Initial condition: u(x,0) = sin(pi * x), du/dt = 0
    for (int i = 0; i < N; i++) {
        double x = i * dx;
        u[i] = sin(M_PI * x);
        u_prev[i] = u[i]; // because du/dt = 0
    }

    // Time evolution
    for (int n = 0; n < STEPS; n++) {
        for (int i = 1; i < N - 1; i++) {
            u_next[i] = 2*u[i] - u_prev[i] + cfl2 * (u[i+1] - 2*u[i] + u[i-1]);
        }

        // Apply Dirichlet boundary conditions: u=0 at both ends
        u_next[0] = 0.0;
        u_next[N-1] = 0.0;

        // Rotate pointers
        double* temp = u_prev;
        u_prev = u;
        u = u_next;
        u_next = temp;

        // Optionally output or visualize here
        // e.g., print u[N/2] every 10 steps
        if (n % 20 == 0) {
            for (int i = 0; i < N; i++) {
                printf("%f ",u[i]);
            }
            printf("\n");
        }
    }

    free(u_prev);
    free(u);
    free(u_next);
    return 0;
}

