#include <iostream>
#include <TTree.h>
#include <TString.h>
#include <TFile.h>
#include <string>

#ifdef __CINT__
int macro(){
#else
int main(){
#endif
	const std::string INPUT_FILE_NAME = "input.dat";

	TString ifn = INPUT_FILE_NAME;
	TTree *tr = new TTree("tr","");
	tr->ReadFile(ifn,"row1/I:row2/D:row3/D:row4/D");
	TString ofn = "data.root";
	TFile *fout = new TFile(ofn,"recreate");
	tr->Write();
	fout->Close();
	return 0;
}
