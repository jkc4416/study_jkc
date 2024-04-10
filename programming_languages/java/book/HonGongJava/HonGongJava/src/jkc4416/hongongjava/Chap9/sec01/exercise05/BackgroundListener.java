package jkc4416.hongongjava.Chap9.sec01.exercise05;

public class BackgroundListener implements CheckBox.OnSelectListener{
    @Override
    public void onSelect() {
        System.out.println("Change background!");
    }
}
