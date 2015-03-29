#include <stdio.h>
#include <math.h>
double const eps = 1e-9,e=2.718281828;

double pp(double mid,double p,double q,double r,double s,double t,double u){
return (p * exp(-1 * mid) ) + (q * sin(mid)) + (r * cos(mid)) + (s * tan(mid)) + (t * mid *mid) + u;
}

double getResult(double p,double q,double r,double s,double t,double u){
double pmid ;
double hi,lo,mid;
hi =1;
lo =0;
pmid = pp(0,p, q, r, s,t,u);
if(pmid < 1e-4 && pmid > -1e-4)
    return 0;

pmid = pp(1,p, q, r, s,t,u);
if(pmid < 1e-4 && pmid > -1e-4)
    return 1;


while(hi - lo >=eps){
mid = (hi+lo) /2.0;
pmid = pp(mid,p, q, r, s,t,u);
if(pmid < 1e-6 && pmid > -1e-6){
    return mid;
}
else if(pmid > 0){
    lo = mid;
}
else if(pmid < 0) {
    hi = mid;
}
}

return -1;
}

int main(){
    double p, q, r, s, t , u ;
while(scanf("%lf %lf %lf %lf %lf %lf",&p,&q,&r,&s,&t,&u) == 6){
    double res = getResult(p, q, r, s, t , u);
    if(res == -1){
        printf("No solution\n");
    }
    else{
        printf("%0.4lf\n",res);
    }


}
return 0;
}
