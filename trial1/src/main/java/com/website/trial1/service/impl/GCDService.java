package com.website.trial1.service.impl;

import com.website.trial1.basic.Result;
import com.website.trial1.service.Calculator;
import org.springframework.stereotype.Service;

@Service
public class GCDService implements Calculator {
    @Override
    public Result compute(double param1, double param2) {
        double max, min;
        max = (param1 > param2) ? param1 : param2;
        min = (param1 < param2) ? param1 : param2;
        if (max % min != 0) {
            return compute(min, max % min);
        } else
            return Result.ok(min);
    }
}
