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
///////////////////////////////////////////////////////////
	
const std::string INPUT_FILE_NAME = "input.dat";
const std::string OUTPUT_FILE_NAME = "out.root";

///////////////////////////////////////////////////////////
	TString ifn = INPUT_FILE_NAME;
	TTree *tr = new TTree("tr","");

	//Change for your data.
	tr->ReadFile(ifn,"row1/I:row2/D:row3/D:row4/D");

	TString ofn = OUTPUT_FILE_NAME;
	TFile *fout = new TFile(ofn,"recreate");
	tr->Write();
	fout->Close();
	return 0;
}
