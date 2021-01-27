

class moteur {
	int enb;
	 int in4;
	 int in3;
	 int in2; 
	 int in1;
	 int ena;
	  
public:	   
	moteur( int enb, int in4, int in3, int in2, int in1, int ena);
	~moteur();
int vitesse = 255;
	void avancer (); 
	void reculer ();
	void droite ();
	void gauche ();
};
