#ifndef __RiskCalculator__
#define __RiskCalculator__
#include "CreditRisk.h"
#include <memory>
#include <vector>
// calculates the risk associated to a portfolio
class RiskCalculator {
public:
 RiskCalculator();
 ~RiskCalculator();
 RiskCalculator(const RiskCalculator &);
 RiskCalculator &operator =(const RiskCalculator &);
 void addCreditRisk(std::shared_ptr<CreditRisk> risk);
 CreditRisk::RiskType portfolioMaxRisk();
 CreditRisk::RiskType portfolioMinRisk();
private:
 std::vector<std::shared_ptr<CreditRisk> > m_creditRisks;
};
#endif /* defined(__RiskCalculator__) */
