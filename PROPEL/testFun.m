function result = testFun(t,y)
    testW = 0.01;
    arg = norm(y)*testW*t;
    result = sin(arg);
end