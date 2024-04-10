package jkc4416.hongongjava.Chap9.sec02.exam03;

public class Button {

    OnClickListener listener;  // Interface type field

    void setOnClickListener(OnClickListener listener) {
        this.listener = listener;
    }

    void touch() {
        listener.onClick();
    }
    static interface OnClickListener {
        void onClick();
    }
}
