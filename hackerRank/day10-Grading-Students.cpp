vector<int> gradingStudents(vector<int> grades) {
    for(int i=0;i<grades.size();i++){
        if(grades[i]>=38){
            int nextMultipleOf5=((grades[i]/5)+1)*5;
            if(nextMultipleOf5-grades[i]<3){
                grades[i]=nextMultipleOf5;
            }
        }
    }
    return grades;
}
