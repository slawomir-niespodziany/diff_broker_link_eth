#pragma once

#include <ILink.h>
#include <diff/Component.h>

class LinkEth : public diff::Component<LinkEth, diff::as<ILink>> {
public:
    LinkEth();
    virtual ~LinkEth();

    bool send(const std::string &message) override;

private:
    const int fixedReliability_{95};
};
