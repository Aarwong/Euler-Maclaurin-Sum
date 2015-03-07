#include <iostream>
#include <cstdlib>
#include <getopt.h>
#include <string>
#include <cmath>
#include <gmp.h>
#include <mpfr.h>

using namespace std;

int stage1();
void summand (mpfr_t sigma, mpfr_t t, mpz_t n, mpfr_t rsum, mpfr_t isum, int precision);
void partial_sum_mpfr(mpfr_t sigma, mpfr_t t, int M1, mpfr_t rresult, mpfr_t iresult, int precision);

int stage2();
void partialSum2MPFR(mpfr_t sigma, mpfr_t t, int M1, int N, mpfr_t rresult, mpfr_t iresult,
						double epsilon, int mpfr_bits);

// Inequalities
int inequalityOfN(mpfr_t sigma, mpfr_t t, int L1, int mpfr_bits);
int inequalityOfL1(mpfr_t sigma, mpfr_t t, double epsilon, int mpfr_bits);

// Calculates the remainder terms of the Euler-Maclaurin sum
void EMsum(mpfr_t sigma, mpfr_t t, int M1, int L1, mpfr_t rresult, mpfr_t iresult, int precision);