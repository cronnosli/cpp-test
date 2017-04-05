# C++ Test

Results from the test 

## Build

The code was build supporting C++14

```
~/build$ make all
[  5%] Building CXX object challenges/anagram/CMakeFiles/anagram.dir/anagram.cpp.o
[ 10%] Linking CXX executable ../../bin/anagram
[ 10%] Built target anagram
[ 15%] Building CXX object challenges/classroom/CMakeFiles/classroom.dir/classroom.cpp.o
[ 20%] Linking CXX executable ../../bin/classroom
[ 20%] Built target classroom
[ 25%] Building CXX object challenges/csv/CMakeFiles/csv.dir/csv.cpp.o
[ 30%] Linking CXX executable ../../bin/csv
[ 30%] Built target csv
[ 35%] Building CXX object challenges/diamonds_in_the_sky/CMakeFiles/diamonds_in_the_sky.dir/diamonds_in_the_sky.cpp.o
[ 40%] Linking CXX executable ../../bin/diamonds_in_the_sky
[ 40%] Built target diamonds_in_the_sky
[ 45%] Building CXX object challenges/dirty_bills/CMakeFiles/dirty_bills.dir/dirty_bills.cpp.o
[ 50%] Linking CXX executable ../../bin/dirty_bills
[ 50%] Built target dirty_bills
[ 55%] Building CXX object challenges/fibonacci/CMakeFiles/fibonacci.dir/fibonacci.cpp.o
[ 60%] Linking CXX executable ../../bin/fibonacci
[ 60%] Built target fibonacci
[ 65%] Building CXX object challenges/functional_anarchy/CMakeFiles/functional_anarchy.dir/functional_anarchy.cpp.o
[ 70%] Linking CXX executable ../../bin/functional_anarchy
[ 70%] Built target functional_anarchy
[ 75%] Building CXX object challenges/inheritance/CMakeFiles/inheritance.dir/inheritance.cpp.o
[ 80%] Linking CXX executable ../../bin/inheritance
[ 80%] Built target inheritance
[ 85%] Building CXX object challenges/palindrome/CMakeFiles/palindrome.dir/palindrome.cpp.o
[ 90%] Linking CXX executable ../../bin/palindrome
[ 90%] Built target palindrome
[ 95%] Building CXX object challenges/stairway_to_heaven/CMakeFiles/stairway_to_heaven.dir/stairway_to_heaven.cpp.o
[100%] Linking CXX executable ../../bin/stairway_to_heaven
[100%] Built target stairway_to_heaven
```

## Unit Tests

```
~/build$ ctest .
Test project /.../cpp-test/build
      Start  1: anagram_test_1
 1/31 Test  #1: anagram_test_1 ...................   Passed    0.01 sec
      Start  2: anagram_test_2
 2/31 Test  #2: anagram_test_2 ...................   Passed    0.01 sec
      Start  3: classroom_test_1
 3/31 Test  #3: classroom_test_1 .................   Passed    0.01 sec
      Start  4: classroom_test_2
 4/31 Test  #4: classroom_test_2 .................   Passed    0.01 sec
      Start  5: classroom_test_3
 5/31 Test  #5: classroom_test_3 .................   Passed    0.01 sec
      Start  6: csv_test_1
 6/31 Test  #6: csv_test_1 .......................   Passed    0.01 sec
      Start  7: diamonds_in_the_sky_test_1
 7/31 Test  #7: diamonds_in_the_sky_test_1 .......   Passed    0.01 sec
      Start  8: dirty_bills_test_1
 8/31 Test  #8: dirty_bills_test_1 ...............   Passed    0.01 sec
      Start  9: dirty_bills_test_2
 9/31 Test  #9: dirty_bills_test_2 ...............   Passed    0.01 sec
      Start 10: dirty_bills_test_3
10/31 Test #10: dirty_bills_test_3 ...............   Passed    0.01 sec
      Start 11: fibonacci_test_1
11/31 Test #11: fibonacci_test_1 .................   Passed    0.01 sec
      Start 12: fibonacci_test_2
12/31 Test #12: fibonacci_test_2 .................   Passed    0.01 sec
      Start 13: fibonacci_test_3
13/31 Test #13: fibonacci_test_3 .................   Passed    0.01 sec
      Start 14: fibonacci_test_4
14/31 Test #14: fibonacci_test_4 .................   Passed    0.01 sec
      Start 15: fibonacci_test_5
15/31 Test #15: fibonacci_test_5 .................   Passed    0.01 sec
      Start 16: fibonacci_test_6
16/31 Test #16: fibonacci_test_6 .................   Passed    0.01 sec
      Start 17: functional_anarchy_test_1
17/31 Test #17: functional_anarchy_test_1 ........   Passed    0.01 sec
      Start 18: functional_anarchy_test_2
18/31 Test #18: functional_anarchy_test_2 ........   Passed    0.02 sec
      Start 19: functional_anarchy_test_3
19/31 Test #19: functional_anarchy_test_3 ........   Passed    0.23 sec
      Start 20: inheritance_test_1
20/31 Test #20: inheritance_test_1 ...............   Passed    0.01 sec
      Start 21: inheritance_test_2
21/31 Test #21: inheritance_test_2 ...............   Passed    0.01 sec
      Start 22: inheritance_test_3
22/31 Test #22: inheritance_test_3 ...............   Passed    0.01 sec
      Start 23: inheritance_test_4
23/31 Test #23: inheritance_test_4 ...............   Passed    0.00 sec
      Start 24: palindrome_test_1
24/31 Test #24: palindrome_test_1 ................   Passed    0.01 sec
      Start 25: palindrome_test_2
25/31 Test #25: palindrome_test_2 ................   Passed    0.01 sec
      Start 26: stairway_to_heaven_test_1
26/31 Test #26: stairway_to_heaven_test_1 ........   Passed    0.01 sec
      Start 27: stairway_to_heaven_test_2
27/31 Test #27: stairway_to_heaven_test_2 ........   Passed    0.01 sec
      Start 28: stairway_to_heaven_test_3
28/31 Test #28: stairway_to_heaven_test_3 ........   Passed    0.01 sec
      Start 29: stairway_to_heaven_test_4
29/31 Test #29: stairway_to_heaven_test_4 ........   Passed    0.01 sec
      Start 30: stairway_to_heaven_test_5
30/31 Test #30: stairway_to_heaven_test_5 ........   Passed    0.01 sec
      Start 31: stairway_to_heaven_test_6
31/31 Test #31: stairway_to_heaven_test_6 ........   Passed    0.01 sec

100% tests passed, 0 tests failed out of 31

Total Test time (real) =   0.50 sec
```

