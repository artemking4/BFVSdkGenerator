// Object: SpawnPositionData
// ClassId: 4492
// RuntimeId: 39007
// TypeInfo: 0x0000000144E2C740
#include "../Emitter/ProcessorData.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace Emitter {
    class SpawnPositionData : public Emitter::ProcessorData {
        Boolean ApplyScreenAspectRatio; // 0x38
        char pad_0x39[0x7];
    }; // 0x40
    static_assert(sizeof(SpawnPositionData) == 0x40);
}
#pragma pack(pop)