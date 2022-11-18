// Object: OctaneAsset
// ClassId: 750
// RuntimeId: 18133
// TypeInfo: 0x0000000144EFD550
#include "../Audio/SoundDataAsset.h"
#include "../OctaneShared/OctaneVoicePriority.h"

#pragma pack(push, 8)
namespace OctaneShared {
    class OctaneAsset : public Audio::SoundDataAsset {
        OctaneShared::OctaneVoicePriority VoicePriority; // 0x38
        char pad_0x3C[0x4];
    }; // 0x40
    static_assert(sizeof(OctaneAsset) == 0x40);
}
#pragma pack(pop)