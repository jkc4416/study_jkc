package jkc4416.hongongjava.Chap9.sec02.exercise03;

public class CheckBox {

    OnSelectListener listener;

    void setOnSelectListener(OnSelectListener listener) {
        this.listener = listener;
    }

    void select() {
        listener.onSelect();
    }
    static interface OnSelectListener {
        void onSelect();
    }
}
