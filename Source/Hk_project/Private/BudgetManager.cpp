#include "BudgetManager.h"

void ABudgetManager::SetProfilingEnabled(bool _enabled) {
}

bool ABudgetManager::IsProfilingEnabled() const {
    return false;
}

FString ABudgetManager::DumpBudgets() {
    return TEXT("");
}

ABudgetManager::ABudgetManager() {
    this->PhysicalMemoryBudget = 5368709120;
    this->m_isProfilingEnabled = false;
    this->m_samplesCount = 15;
    this->m_warningPercentage = 0.80f;
}

