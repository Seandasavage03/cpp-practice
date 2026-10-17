#include <stdio.h>
#include <cuda_runtime.h>

__global__ void helloGPU()
{
    printf("Hello from GPU!\n");
}

int main()
{
    helloGPU<<<2, 4>>>();

    cudaDeviceSynchronize();

    return 0;
}