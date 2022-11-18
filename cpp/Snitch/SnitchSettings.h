// Object: SnitchSettings
// ClassId: 5023
// RuntimeId: 64196
// TypeInfo: 0x0000000144F2C950
#include "../Core/SystemSettings.h"
#include "../Global/Boolean.h"
#include "../Global/CString.h"
#include "../Snitch/LogTransmitterProviderSettings.h"
#include "../Snitch/ContactProviderSettings.h"
#include "../Snitch/StatsDProviderSettings.h"
#include "../Snitch/DistroProviderSettings.h"
#include "../Snitch/LiveScoreboardProviderSettings.h"

#pragma pack(push, 8)
namespace Snitch {
    class SnitchSettings : public Core::SystemSettings {
        CString Url; // 0x20
        Snitch::LogTransmitterProviderSettings LogTransmitterProvider; // 0x28
        Snitch::ContactProviderSettings ContactProvider; // 0x38
        Snitch::StatsDProviderSettings StatsDProvider; // 0x48
        Snitch::DistroProviderSettings DistroProvider; // 0x58
        Snitch::LiveScoreboardProviderSettings LiveScoreboardProvider; // 0x68
        CString GameName; // 0x80
        Boolean Enabled; // 0x88
        Boolean SSL; // 0x89
        Boolean EditorialConfigEnabled; // 0x8A
        char pad_0x8B[0x5];
    }; // 0x90
    static_assert(sizeof(SnitchSettings) == 0x90);
}
#pragma pack(pop)