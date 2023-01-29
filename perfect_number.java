 class perfect_number {
        int res = 0;
        public int trailingZeroes(int n) {
            if(n < 5) return res;
            res = res + n/5;
            return trailingZeroes(n/5);
        }
    }

    

