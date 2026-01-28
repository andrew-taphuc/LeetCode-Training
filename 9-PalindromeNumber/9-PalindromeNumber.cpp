// Last updated: 1/28/2026, 2:48:30 PM
class Solution {
public:
    bool isPalindrome(int x) {
        // Case loại nhanh:
        // - số âm
        // - kết thúc bằng 0 nhưng không phải 0
        if (x < 0 || (x % 10 == 0 && x != 0)) {
            return false;
        }

        int reversed = 0;

        // Đảo ngược nửa sau của số
        while (x > reversed) {
            reversed = reversed * 10 + x % 10;
            x /= 10;
        }

        // Nếu độ dài chẵn: x == reversed
        // Nếu độ dài lẻ: bỏ chữ số giữa: reversed / 10
        return (x == reversed) || (x == reversed / 10);
    }
};
