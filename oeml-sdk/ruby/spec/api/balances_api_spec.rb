=begin
#OEML - REST API

#This section will provide necessary information about the `CoinAPI OEML REST API` protocol. This API is also available in the Postman application: <a href=\"https://postman.coinapi.io/\" target=\"_blank\">https://postman.coinapi.io/</a>       

The version of the OpenAPI document: v1
Contact: support@coinapi.io
Generated by: https://openapi-generator.tech
OpenAPI Generator version: 5.1.1

=end

require 'spec_helper'
require 'json'

# Unit tests for OpenapiClient::BalancesApi
# Automatically generated by openapi-generator (https://openapi-generator.tech)
# Please update as you see appropriate
describe 'BalancesApi' do
  before do
    # run before each test
    @api_instance = OpenapiClient::BalancesApi.new
  end

  after do
    # run after each test
  end

  describe 'test an instance of BalancesApi' do
    it 'should create an instance of BalancesApi' do
      expect(@api_instance).to be_instance_of(OpenapiClient::BalancesApi)
    end
  end

  # unit tests for v1_balances_get
  # Get balances
  # Get current currency balance from all or single exchange.
  # @param [Hash] opts the optional parameters
  # @option opts [String] :exchange_id Filter the balances to the specific exchange.
  # @return [Array<Balance>]
  describe 'v1_balances_get test' do
    it 'should work' do
      # assertion here. ref: https://www.relishapp.com/rspec/rspec-expectations/docs/built-in-matchers
    end
  end

end
