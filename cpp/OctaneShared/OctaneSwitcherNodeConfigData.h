// Object: OctaneSwitcherNodeConfigData
// ClassId: 933
// RuntimeId: 44851
// TypeInfo: 0x0000000144EFD350
#include "../Audio/AudioGraphNodeConfigData.h"
#include "../OctaneShared/OctaneAsset.h"

#pragma pack(push, 8)
namespace OctaneShared {
    class OctaneSwitcherNodeConfigData : public Audio::AudioGraphNodeConfigData {
        Array<OctaneShared::OctaneAsset> Assets; // 0x28
    }; // 0x30
    static_assert(sizeof(OctaneSwitcherNodeConfigData) == 0x30);
}
#pragma pack(pop)