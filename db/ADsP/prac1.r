#R version 3.4.4 
print("Hello, world!")
#16
s<-c("monday","tuesday","wednesday")
substr(s,1,2)
#18
calculate <-function(a){
    y=1
    for(i in 1:a)
        y=y*i
    print(y)
}
    calculate(4)
    
#19
x<-c(1:5)
y<-seq(10.50,10)
xy<-rbind(x,y)
xy
xy[1,]
xy[,1]


#21
#22
print("////output22////")

nchar("statistics")
length("statistics")
#substr("statistics") - error!!
paste("statistics")

#23
A <- cbind(c(1,2,3),c(4,5,6),c(7,8,9))
colnames(A)<-c("a", "b", "c")
rownames(A)<-c("r1","r2","r3")
print(A)
print("////output23////")
A[,"a"]
A[-c(2,3),]
A[,1]
A[,-(2:3)]

#25
print("////output25////")

f<- function(x,a) return((x-a)^2)
    f(1:2,3)
    
#26
    print("////output26////")

x<- c(1,2,3,NA)
    mean(x)
    
#27
    
print("////output27////")

x<-1:100
#    print(x)
    sum(x=50)
    
https://rextester.com/l/r_online_compiler
