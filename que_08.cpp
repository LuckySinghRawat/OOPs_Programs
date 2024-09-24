/*
Anna is a contender for valedictorian of her high school. She wants to know 
how many students (if any) have scored higher than her in the exams given 
during this semester.
Create a class named Student with the following specifications:
 An instance variable named scores holds a student's 5 exam scores.
 A void input () function reads 5 integers and saves them to scores.
 An int calculateTotalScore() function that returns the sum of the 
student's scores.
Input Format
In the void Student::input() function, you must read 5 scores from standard 
input and save them to your scores instance variable.
Output Format
In the int Student::calculateTotalScore() function, you must return the 
student's total grade (the sum of the values in scores).
The code in the editor will determine how many scores are larger than 
Anna’s and print that number to the console.
Sample Input
The first line contains n, the number of students in Anna’s class. The n 
subsequent lines contain each student's 5 exam grades for this semester.
3
30 40 45 10 10
40 40 40 10 10
50 20 30 10 10
Sample Output
1
*/

#include<iostream>
using namespace std;
class Student{
    public:
    int  scores[5];
    void input(){
        cout<< "Enter 5 scores : ";
        for(int i = 0;i<5;i++){
            cin>>scores[i];
        }
    }
    int calculateTotalScore(){
        int total ;
        for(int i = 0;i<5;i++){
            total += scores[i];
        }
        return total;
    }
};
int main(){
    int AnnaTotal = 200,count = 0 ;
    Student s1[3];
    for (int i = 0;i < 3; i++){
        s1[i].input();
        if(s1[i].calculateTotalScore()>AnnaTotal){
            count++;
        }
    }
    cout<<"Scores larger than Anna's are : "<<count;

}