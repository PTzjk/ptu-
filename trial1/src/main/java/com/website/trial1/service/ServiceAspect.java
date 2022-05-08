package com.website.trial1.service;

import org.aspectj.lang.JoinPoint;
import org.aspectj.lang.ProceedingJoinPoint;
import org.aspectj.lang.annotation.*;
import org.springframework.stereotype.Component;

@Component
@Aspect
public class ServiceAspect {
    @Pointcut("execution(public * com.website.trial1.service.Calculator.*(..))) ")
    public void pointCut(){

    }
    @Before("pointCut()")
    public void before(JoinPoint joinPoint){
        System.out.print("请求参数：");
        for(Object o:joinPoint.getArgs())
            System.out.print(o+"");
        System.out.println();
    }
    @After("pointCut()")
    public  void after(){
        System.out.println("处理完成");
    }
    @AfterReturning(returning = "retObj",pointcut="pointCut()")
    public void afterReturning(Object retObj){
        System.out.println("返回："+retObj);
    }
    @Around("pointCut()")
    public Object around(ProceedingJoinPoint joinPoint) throws Throwable{
        System.out.println("around前");
        Object obj=joinPoint.proceed();
        System.out.println("around后");
        return  obj;
    }
}
