// Babylonian Algorithm

double sqrt(double n){
    double x = 1;
    double y = n;
    if(x<y){
        while((y-x)>=0.001){
            y = (y+x)/2;
            x = n/y;
        }
    }
    else{
        while((x-y)>=0.001){
            x = (x+y)/2;
            y = n/x;
        }
    }
    return (x+y)/2;
}