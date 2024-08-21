//  1281. Subtract the Product and Sum of Digits of an Integer

// class Solution {
// public:
//     int subtractProductAndSum(int n) {
        
//         int prod = 1;
//         int sum = 0;

//         while(n!=0){
//             int digit = n%10;

//             prod = prod * digit;
//             sum = sum + digit;

//             n = n/10;
//         }

//         int ans = prod - sum ;
//         return ans;
//     }
// };

//_____________________________________________________________________________________________________

//191. Number of 1 Bits

// class Solution {
// public:
//     int hammingWeight(uint32_t n) {                                   ( int n = 3ms  || uint32_t n = 0ms )
//         int count = 0;
//         while(n!=0){
//             if(n&1){
//                 count++;
//             }
//             n = n>>1;
//         }
//         return count;
//     }
// };