---

##Question: 1

Create class person -> name,age
class Employee -> inherit person -> id, salary
class manager -> inherit Employee -> team_size, department

## Question: 2

create class Student -> name,department,cpi,spi
class Sports -> inherits Student -> Sports rank
class GradeSheet -> inherit Sports -> isEligible

## Question: 3

create class Employee -> id,department,name,salary
class Project -> code,title,budget
class Project_manager -> inherits Employee and Project

## Question: 4

create class Student -> roll number,name
class Test -> marks of 5 subjects
class result -> inherits Test and Student -> total, average

## Question: 5

create class Student -> roll number,name
class Exam -> inherits Student(virtually) -> marks of mid 1 and mid 2
class Sports -> inherits Student(vitually) -> sports_marks
class Result -> inherits Exam and Sports -> total

## Question: 6

class Student -> name,roll_no
class Internal -> inherits Student(virtually) -> internal_marks
class External -> inherits Student(virtually) -> external_marks
class University -> university_marks
class Result -> inherits Internal, External and University