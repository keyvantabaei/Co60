#include <TTree.h>
#include <TFile.h>
#include <TH1D.h>

void plot() 
{         


  TFile* r1 = new TFile("/home/k1/k1-Files/Programing/Geant4-workshop/reports/5/modular physicslist/30*30 compare to 10*10 ssd80/1010result.root");
  TFile* r2 = new TFile("/home/k1/k1-Files/Programing/Geant4-workshop/reports/5/modular physicslist/30*30 compare to 10*10 ssd80/3535result.root");             
   
      
      
      

  TCanvas* c1 = new TCanvas("c1", "  ");

   
   
  TH1D* hist1 = (TH1D*)r1->Get("SPH");
  TH1D* hist2 = (TH1D*)r2->Get("SPH");

  


        
    hist1->Draw();
    hist1->SetLineColor(kBlue);
    hist1->SetLineWidth(2);
    
    hist2->Draw("SAME");
    hist2->SetLineColor(kRed);
    hist2->SetLineWidth(2);
    

    
   hist1->SetTitle("Scattered Photon Energy Spectrom Per 50 keV ; Energy (keV) ; Photons");
  
   
   auto legend = new TLegend(0.1,0.7,0.48,0.9);
   legend->SetHeader("Field Size","C"); // option "C" allows to center the header
   legend->AddEntry(hist1,"10x10","l");
   legend->AddEntry(hist2,"35x35","l");

   legend->Draw();

  c1->cd();
  c1->Update(); 


 


 
}

