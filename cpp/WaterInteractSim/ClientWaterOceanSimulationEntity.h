// Object: ClientWaterOceanSimulationEntity
// ClassId: 8270
// RuntimeId: 37393
// TypeInfo: 0x0000000144F71F30
#include "../WaterInteractSim/WaterOceanSimulationEntity.h"

namespace WaterInteractSim {
    class ClientWaterOceanSimulationEntity : public WaterInteractSim::WaterOceanSimulationEntity {
        char pad_0x60[0x40];
    }; // 0xA0
    static_assert(sizeof(ClientWaterOceanSimulationEntity) == 0xA0);
}