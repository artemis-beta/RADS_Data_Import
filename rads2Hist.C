void rads2Hist()
{
	TFile * output_file = new TFile("RADS_Data.root","UPDATE");

	TH1D * hist = new TH1D("hist","Radiation Dosimetry with Altitude",100,0,10000);
	
	TTree * t = new TTree("t","RADS_Data");

	t->ReadFile("RADS_long.dat","RAD_cpm/I");
	
	t->Write();
	
	output_file->Close();
		
}
