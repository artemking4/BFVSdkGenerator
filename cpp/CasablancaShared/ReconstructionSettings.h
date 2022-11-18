// Object: ReconstructionSettings
// ClassId: 5015
// RuntimeId: 63336
// TypeInfo: 0x0000000144D12280
#include "../Core/SystemSettings.h"
#include "../Ant/AntRef.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class ReconstructionSettings : public Core::SystemSettings {
        Ant::AntRef ConstructionAnimationEnum; // 0x20
        char pad_0x34[0x4];
    }; // 0x38
    static_assert(sizeof(ReconstructionSettings) == 0x38);
}
#pragma pack(pop)