// Last updated: 5/25/2026, 11:05:15 PM
1class Solution {
2    public double[] convertTemperature(double celsius) {
3        double a = celsius + 273.15;
4        double b = celsius * 1.8 + 32;
5        return new double [] {a, b};
6    }
7}