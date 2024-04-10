package jkc4416.hongongjava.Chap11.sec01.exam01;

public class Member {
    // Define fields
    public String id;

    // Define constructor
    public Member(String id) {
        this.id = id;
    }

    @Override
    public boolean equals(Object obj) {
        if(obj instanceof Member) {
            Member member = (Member) obj;
            if(id.equals(member.id)) {
                return true;
            }
        }
        return false;
    }
}
