char findGrade(double x){
    char grade;
    if(x>90){
        grade ='A';
    }
    else if(x>75&&x<=90){
        grade='B';
    }
    else if(x>60&&x<=75){
        grade='C';
    }
    else if(x>45&&x<=60){
        grade='D';
    }
    else if(x<=45){
        grade='F';
    }
    return grade;
}