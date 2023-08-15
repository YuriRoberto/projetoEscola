#include <stdio.h>
#include <string.h>

typedef struct date {
  int day;
  int month;
  int year;
} Date;

typedef struct studentData {
  int registration;
  char name[50];
  char gender;
  Date birthDay;
  char individualRegistration[15];
} Student;

typedef struct teacherData {
  int registration;
  char name[50];
  char gender;
  Date birthDay;
  char individualRegistration[15];
} Teacher;

typedef struct matterData {
  int code;
  char name[50];
  char semester;
  Teacher teacher;
  Student students[40];
} Matter;
