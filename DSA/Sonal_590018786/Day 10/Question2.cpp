string DetermineGen(string st){
    set<char> s;

    for(auto x:st){
        s.insert(x);
    }

    if(s.size()%2==0){
        return "CHAT WITH HER!";
    }else{
        return "IGNORE HIM!";
    }

}