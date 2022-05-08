package com.website.trial1.service;


import com.website.trial1.basic.Result;
import org.springframework.stereotype.Component;
@Component
public interface Calculator {

    Result compute(double param1, double param2);
}
