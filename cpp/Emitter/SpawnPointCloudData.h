// Object: SpawnPointCloudData
// ClassId: 4491
// RuntimeId: 52284
// TypeInfo: 0x0000000144E2C940
#include "../Emitter/ProcessorData.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace Emitter {
    class SpawnPointCloudData : public Emitter::ProcessorData {
        Boolean ExternalRotationAndScale; // 0x38
        char pad_0x39[0x7];
    }; // 0x40
    static_assert(sizeof(SpawnPointCloudData) == 0x40);
}
#pragma pack(pop)