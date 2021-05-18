/**
 * OEML - REST API
 * This section will provide necessary information about the `CoinAPI OEML REST API` protocol. This API is also available in the Postman application: <a href=\"https://postman.coinapi.io/\" target=\"_blank\">https://postman.coinapi.io/</a>       
 *
 * The version of the OpenAPI document: v1
 * Contact: support@coinapi.io
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 5.1.1.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * OrderExecutionReport_allOf.h
 *
 * The order execution report message.
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_OrderExecutionReport_allOf_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_OrderExecutionReport_allOf_H_


#include "../ModelBase.h"

#include "Fills.h"
#include <cpprest/details/basic_types.h>
#include <vector>
#include "OrdStatus.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {


/// <summary>
/// The order execution report message.
/// </summary>
class  OrderExecutionReport_allOf
    : public ModelBase
{
public:
    OrderExecutionReport_allOf();
    virtual ~OrderExecutionReport_allOf();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// OrderExecutionReport_allOf members

    /// <summary>
    /// The unique identifier of the order assigned by the client converted to the exchange order tag format for the purpose of tracking it.
    /// </summary>
    utility::string_t getClientOrderIdFormatExchange() const;
    bool clientOrderIdFormatExchangeIsSet() const;
    void unsetClient_order_id_format_exchange();

    void setClientOrderIdFormatExchange(const utility::string_t& value);

    /// <summary>
    /// Unique identifier of the order assigned by the exchange or executing system.
    /// </summary>
    utility::string_t getExchangeOrderId() const;
    bool exchangeOrderIdIsSet() const;
    void unsetExchange_order_id();

    void setExchangeOrderId(const utility::string_t& value);

    /// <summary>
    /// Quantity open for further execution. &#x60;amount_open&#x60; &#x3D; &#x60;amount_order&#x60; - &#x60;amount_filled&#x60;
    /// </summary>
    double getAmountOpen() const;
    bool amountOpenIsSet() const;
    void unsetAmount_open();

    void setAmountOpen(double value);

    /// <summary>
    /// Total quantity filled.
    /// </summary>
    double getAmountFilled() const;
    bool amountFilledIsSet() const;
    void unsetAmount_filled();

    void setAmountFilled(double value);

    /// <summary>
    /// Calculated average price of all fills on this order.
    /// </summary>
    double getAvgPx() const;
    bool avgPxIsSet() const;
    void unsetAvg_px();

    void setAvgPx(double value);

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<OrdStatus> getStatus() const;
    bool statusIsSet() const;
    void unsetStatus();

    void setStatus(const std::shared_ptr<OrdStatus>& value);

    /// <summary>
    /// Timestamped history of order status changes.
    /// </summary>
    std::vector<std::vector<utility::string_t>>& getStatusHistory();
    bool statusHistoryIsSet() const;
    void unsetStatus_history();

    void setStatusHistory(const std::vector<std::vector<utility::string_t>>& value);

    /// <summary>
    /// Error message.
    /// </summary>
    utility::string_t getErrorMessage() const;
    bool errorMessageIsSet() const;
    void unsetError_message();

    void setErrorMessage(const utility::string_t& value);

    /// <summary>
    /// Relay fill information on working orders.
    /// </summary>
    std::vector<std::shared_ptr<Fills>>& getFills();
    bool fillsIsSet() const;
    void unsetFills();

    void setFills(const std::vector<std::shared_ptr<Fills>>& value);


protected:
    utility::string_t m_Client_order_id_format_exchange;
    bool m_Client_order_id_format_exchangeIsSet;
    utility::string_t m_Exchange_order_id;
    bool m_Exchange_order_idIsSet;
    double m_Amount_open;
    bool m_Amount_openIsSet;
    double m_Amount_filled;
    bool m_Amount_filledIsSet;
    double m_Avg_px;
    bool m_Avg_pxIsSet;
    std::shared_ptr<OrdStatus> m_Status;
    bool m_StatusIsSet;
    std::vector<std::vector<utility::string_t>> m_Status_history;
    bool m_Status_historyIsSet;
    utility::string_t m_Error_message;
    bool m_Error_messageIsSet;
    std::vector<std::shared_ptr<Fills>> m_Fills;
    bool m_FillsIsSet;
};


}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_OrderExecutionReport_allOf_H_ */
