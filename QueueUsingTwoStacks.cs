using System;
using System.Collections.Generic;
using System.IO;
class Solution {
    static void Main(String[] args) {
        int num = Convert.ToInt32(Console.ReadLine());
        QueueUsingTwoStacks q = new QueueUsingTwoStacks();
        for(int i=0;i<num;i++){
            string[] s = Console.ReadLine().Split(' ');
            if(s.Length==2){
                q.append(Convert.ToInt32(s[1]));
            }
            else{
                switch(s[0]){
                    case "2": q.extract();
                            break;
                    case "3": q.display();
                            break;
                }
            }
        }
    }
}

public class QueueUsingTwoStacks {
	private Stack<int> s1, s2;
	private int count;
	
	public void queueUsingTwoStacks() {
		this.s1 = new Stack<int>();
		this.s2 = new Stack<int>();
		this.count = 0;
	}

	public int size(){
		return this.count;
	}
	
	public void append(int x){
		if(s2.Count==0){
			this.s1.Push(x);
		}
		else{
			while(this.s2.Count!=0){//for(int i=0;i<s2.size(); i++)
				s1.Push(s2.Pop());
			}
			s1.Push(x);
		}
		int z = this.count;
		this.count = ++z;
	}

	public int? extract(){
		int z = this.count;
		this.count = --z;
		if(this.s1.Count!=0){
			while(this.s1.Count!=0){
				s2.Push(s1.Pop());
			}
			int temp = s2.Pop();
			return temp;
			//return (Integer)this.s2.pop();
		}
		else{
			if(this.s2.Count>0){
				int temp = this.s2.Pop();
				return temp;
			}
			return null;
		}
		/*return null;*/
	}
	
	private void disp(){
		if(s2.Count==0){
			Console.WriteLine("Queue Empty");
		}
		else{
			Stack<int> tempDisplay = new Stack<int>();
			while(this.s2.Count!=0){
				int intg = s2.Pop();
				Console.WriteLine(intg);
				tempDisplay.Push(intg);
				s1.Push(intg);
			}
		}
	}
	
	public void display(){
		Console.WriteLine("Size: " + this.size()+"\nContents:");
		if(this.s1.Count==0)
			this.disp();
		
		else{
			while(this.s1.Count!=0){
				s2.Push(s1.Pop());
			}
			this.disp();
		}
		Console.WriteLine("");
	}
}
