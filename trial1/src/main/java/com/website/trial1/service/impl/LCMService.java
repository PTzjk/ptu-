package com.website.trial1.service.impl;

import com.website.trial1.basic.Result;
import com.website.trial1.service.Calculator;
import org.springframework.context.annotation.PropertySource;
import org.springframework.stereotype.Service;

@Service
public class LCMService implements Calculator {
    @Override
    public Result compute(double param1, double param2) {
        double max = (param1 > param2) ? param1 : param2;
        double i;
        for (i = max; i <= param1 * param2; i++) {
            if (i % param1 == 0 && i % param2 == 0) {
                return Result.ok(i);
            }
        }
        return Result.ok(i);
    }
}
