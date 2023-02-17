size(400,400);
fill(255,0,0);
noStroke();
ellipse(200,200,100,150);//先橢圓
for(int i=0;i<400;i++){
  for(int j=0;j<400;j++){
    //要把大的座標j,i換成數學-2-+2的x,y
    float x = (j-200)/100.0;
    float y = -(i-200)/100.0;//y改成負的
  if((x*x+y*y-1)*(x*x+y*y-1)*(x*x+y*y-1)-x*x*y*y*y<0)
    ellipse(j,i,2,2);
  }
}
