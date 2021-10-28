#include <TTree.h>
#include <TFile.h>
#include <TH1D.h>

void plot() 
{         


  TFile* r1 = new TFile("/home/k1/k1-Files/Programing/Geant4-workshop/reports/5/modular physicslist/source region/result.root");

   
      
      
      

  TCanvas* c1 = new TCanvas("c1", "  ");

   c1->Divide(2,2);
   
  TH1D* hist3 = (TH1D*)r1->Get("APH");
  TH1D* hist2 = (TH1D*)r1->Get("SPH");
  TH1D* hist1 = (TH1D*)r1->Get("E");
  

c1->cd(1);
        
    hist1->Draw();
    hist1->SetLineColor(kBlue);
    hist1->SetLineWidth(2);
    
   hist1->SetTitle("Electron Energy Spectrom Per 50 keV ; Energy (keV) ; Electrons");
    c1->cd(2);
    hist2->Draw();
    hist2->SetLineColor(kRed);
    hist2->SetLineWidth(2);

   hist2->SetTitle("Scattered Photon Energy Spectrom Per 50 keV ; Energy (keV) ; Photons");
    c1->cd(3);
    hist3->Draw();
    hist3->SetLineColor(kRed);
    hist3->SetLineWidth(2);
    
       hist3->SetTitle("ALL Photon Energy Spectrom Per 50 keV ; Energy (keV) ; Photons");

  
   
  // auto legend = new TLegend(0.1,0.7,0.48,0.9);
   //legend->SetHeader("","C"); // option "C" allows to center the header
   //legend->AddEntry(hist1,"5x5   field size ","l");
  // legend->AddEntry(hist2,"7x7   field size ","l");

  //legend->Draw();



 


 
}

