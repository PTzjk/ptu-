package com.website.trial1.controller;

import com.website.trial1.basic.Result;
import com.website.trial1.service.impl.*;
import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.web.bind.annotation.RequestMapping;
import org.springframework.web.bind.annotation.RestController;

@RestController
public class CalContorller {
    @Autowired
    private AddService addService;
    @Autowired
    private MinusService minusService;
    @Autowired
    private MultiService multiService;
    @Autowired
    private DivideService divideService;
    @Autowired
    private GCDService gcdService;
    @Autowired
    private LCMService lcmService;

    @RequestMapping("/add")
    public Result add(double param1, double param2) {
        return addService.compute(param1, param2);
    }

    @RequestMapping("/minus")
    public Result minus(double param1, double param2) {
        return minusService.compute(param1, param2);
    }

    @RequestMapping("/multi")
    public Result multi(double param1, double param2) {
        return multiService.compute(param1, param2);
    }

    @RequestMapping("/divide")
    public Result divide(double param1, double param2) {
        return divideService.compute(param1, param2);
    }

    @RequestMapping("/gcd")
    public Result gcd(double param1, double param2) {return gcdService.compute(param1, param2);}

    @RequestMapping("/lcm")
    public Result lcm(double param1, double param2) {
        return lcmService.compute(param1, param2);
    }
}
