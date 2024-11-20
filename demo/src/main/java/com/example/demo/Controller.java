package com.example.demo;

import org.springframework.web.bind.annotation.GetMapping;
import org.springframework.stereotype.Controller;

@Controller
public class Controller {
    
    @GetMapping("/")
    public String home() {
        return "home";
    }
}
