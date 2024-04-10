package jkc4416.hongongjava.Chap9.sec01.exercise05;

public class CheckBox {

    /*
    Define instance field
     */
    OnSelectListener listener;  // Define "OnSelectListener" type reference field

    /*
    Define constructor
     */
    public CheckBox() {

    }

    /*
    Define setter method for OnSelectListener object
     */
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
