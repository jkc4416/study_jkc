package jkc4416.hongongjava.Chap9.sec01.exercise05;

public class CheckBoxExample {

    public static void main(String[] args) {
        CheckBox checkBox = new CheckBox();
        checkBox.setOnSelectListener(new BackgroundListener());
        checkBox.select();
    }
}
