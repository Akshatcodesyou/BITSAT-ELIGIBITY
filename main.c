#include <stdio.h>

// Function to check if a student has passed a subject
void check_pass(int marks, const char *subject) {
  if (marks < 0 || marks > 100) {
    printf("Invalid input for %s!\n", subject);
  } else {
    if (marks > 33) {
      printf("%s-PASS\n", subject);
    } else {
      printf("%s-FAIL\n", subject);
    }
  }
}

// Function to check if a subject meets BITSAT criteria
void check_bitsat_criteria(int marks, const char *subject) {
  if (marks >= 60) {
    printf("%s meets BITSAT criteria\n", subject);
  } else if (marks > 33) {
    printf("%s-PASS but not eligible for BITSAT. Individual subject criteria not cleared\n", subject);
  }
}

int main() {
  int a, b, c, d, e;
  char subject[20];

  printf("Enter Math marks: \n");
  scanf("%d", &a);
  printf("Enter Chemistry marks: \n");
  scanf("%d", &b);
  printf("Enter Physics marks: \n");
  scanf("%d", &c);
  printf("Enter English marks: \n");
  scanf("%d", &d);
  printf("Enter name of 5th subject: \n");
  scanf("%s", subject);
  printf("Enter the marks of %s: \n", subject);
  scanf("%d", &e);

  // Check for each subject
  check_pass(a, "Maths");
  check_pass(b, "Chemistry");
  check_pass(c, "Physics");
  check_pass(d, "English");
  check_pass(e, subject);

  // Check individual subject criteria for BITSAT
  check_bitsat_criteria(a, "Maths");
  check_bitsat_criteria(b, "Chemistry");
  check_bitsat_criteria(c, "Physics");

  // Calculate average
  if ((a >= 0 && a <= 100) && (b >= 0 && b <= 100) && (c >= 0 && c <= 100) && (d >= 0 && d <= 100) && (e >= 0 && e <= 100)) {
    int avg = (a + b + c + d + e) / 5;

    // Check overall BITSAT eligibility
    if (avg >= 75 && a >= 60 && b >= 60 && c >= 60) {
      printf("You are eligible for BITSAT :)\n");
    } else {
      printf("You are not eligible for BITSAT :(\n");
    }
  } else {
    printf("Invalid input in one or more subjects, cannot calculate average.\n");
  }

  return 0;
}
