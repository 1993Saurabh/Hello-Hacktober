class Person
	def initialize(future_job)
		@future_job = future_job
		puts self.first_words
	end

	def first_words
		if @future_job == 'dev'
			return 'Hello World'
		else
			return 'gugu dada'
		end
	end
end

person = Person.new('dev')
