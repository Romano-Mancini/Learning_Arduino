#include "digits.h"

void digit_0(int A, int B, int C, int D, int E, int F, int G, int DP) {
	digitalWrite(A, HIGH);
	digitalWrite(B, HIGH);
	digitalWrite(C, HIGH);
	digitalWrite(D, HIGH);
	digitalWrite(E, HIGH);
	digitalWrite(F, HIGH);
	digitalWrite(G, LOW);
	digitalWrite(DP, LOW);
}

void digit_1(int A, int B, int C, int D, int E, int F, int G, int DP) {
  digitalWrite(A, LOW);
	digitalWrite(B, HIGH);
	digitalWrite(C, HIGH);
	digitalWrite(D, LOW);
	digitalWrite(E, LOW);
	digitalWrite(F, LOW);
	digitalWrite(G, LOW);
	digitalWrite(DP, LOW);
}

void digit_2(int A, int B, int C, int D, int E, int F, int G, int DP) {
  digitalWrite(A, HIGH);
	digitalWrite(B, HIGH);
	digitalWrite(C, LOW);
	digitalWrite(D, HIGH);
	digitalWrite(E, HIGH);
	digitalWrite(F, LOW);
	digitalWrite(G, HIGH);
	digitalWrite(DP, LOW);
}

void digit_3(int A, int B, int C, int D, int E, int F, int G, int DP) {
  digitalWrite(A, HIGH);
	digitalWrite(B, HIGH);
	digitalWrite(C, HIGH);
	digitalWrite(D, HIGH);
	digitalWrite(E, LOW);
	digitalWrite(F, LOW);
	digitalWrite(G, HIGH);
	digitalWrite(DP, LOW);
}

void digit_4(int A, int B, int C, int D, int E, int F, int G, int DP) {
  digitalWrite(A, LOW);
	digitalWrite(B, HIGH);
	digitalWrite(C, HIGH);
	digitalWrite(D, LOW);
	digitalWrite(E, LOW);
	digitalWrite(F, HIGH);
	digitalWrite(G, HIGH);
	digitalWrite(DP, LOW);
}

void digit_5(int A, int B, int C, int D, int E, int F, int G, int DP) {
  digitalWrite(A, HIGH);
	digitalWrite(B, LOW);
	digitalWrite(C, HIGH);
	digitalWrite(D, HIGH);
	digitalWrite(E, LOW);
	digitalWrite(F, HIGH);
	digitalWrite(G, HIGH);
	digitalWrite(DP, LOW);
}

void digit_6(int A, int B, int C, int D, int E, int F, int G, int DP) {
  digitalWrite(A, HIGH);
	digitalWrite(B, LOW);
	digitalWrite(C, HIGH);
	digitalWrite(D, HIGH);
	digitalWrite(E, HIGH);
	digitalWrite(F, HIGH);
	digitalWrite(G, HIGH);
	digitalWrite(DP, LOW);
}

void digit_7(int A, int B, int C, int D, int E, int F, int G, int DP) {
  digitalWrite(A, HIGH);
	digitalWrite(B, HIGH);
	digitalWrite(C, HIGH);
	digitalWrite(D, LOW);
	digitalWrite(E, LOW);
	digitalWrite(F, LOW);
	digitalWrite(G, LOW);
	digitalWrite(DP, LOW);
}

void digit_8(int A, int B, int C, int D, int E, int F, int G, int DP) {
  digitalWrite(A, HIGH);
	digitalWrite(B, HIGH);
	digitalWrite(C, HIGH);
	digitalWrite(D, HIGH);
	digitalWrite(E, HIGH);
	digitalWrite(F, HIGH);
	digitalWrite(G, HIGH);
	digitalWrite(DP, LOW);
}

void digit_9(int A, int B, int C, int D, int E, int F, int G, int DP) {
  digitalWrite(A, HIGH);
	digitalWrite(B, HIGH);
	digitalWrite(C, HIGH);
	digitalWrite(D, HIGH);
	digitalWrite(E, LOW);
	digitalWrite(F, HIGH);
	digitalWrite(G, HIGH);
	digitalWrite(DP, LOW);
}
